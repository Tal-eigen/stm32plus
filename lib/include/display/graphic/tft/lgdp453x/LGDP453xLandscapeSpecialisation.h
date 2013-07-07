/*
 * This file is a part of the open source stm32plus library.
 * Copyright (c) 2011,2012 Andy Brown <www.andybrown.me.uk>
 * Please see website for licensing terms.
 */

#pragma once

#include "display/graphic/tft/lgdp453x/commands/AllCommands.h"


namespace stm32plus {
	namespace display {


		/**
		 * Specialisation of LGDP453xOrientation for the panel in landscape mode.
		 * @tparam TAccessMode the access mode implementation, e.g. FSMC
		 */

		template<class TAccessMode>
		class LGDP453xOrientation<LANDSCAPE,TAccessMode> {

			private:
				TAccessMode& _accessMode;

			protected:
				LGDP453xOrientation(TAccessMode& accessMode);

				constexpr uint16_t getOrientationEntryMode() const;

		  public:
				constexpr int16_t getWidth() const;
				constexpr int16_t getHeight() const;
				void moveTo(const Rectangle& rc) const;

				void setScrollPosition(int16_t scrollPosition);
		};


		/**
		 * Constructor
		 */

		template<class TAccessMode>
		inline LGDP453xOrientation<LANDSCAPE,TAccessMode>::LGDP453xOrientation(TAccessMode& accessMode)
			: _accessMode(accessMode) {
		}


		/**
		 * Get the register setting for portrait mode
		 * @return The entry mode register setting for landscape
		 */

		template<class TAccessMode>
		constexpr inline uint16_t LGDP453xOrientation<LANDSCAPE,TAccessMode>::getOrientationEntryMode() const {
			return lgdp453x::EntryModeCmd::AM_VERTICAL | lgdp453x::EntryModeCmd::ID_HINC_VDEC;
		}


		/**
		 * Get the width in pixels
		 * @return 320px
		 */

		template<class TAccessMode>
		constexpr inline int16_t LGDP453xOrientation<LANDSCAPE,TAccessMode>::getWidth() const {
		  return 320;
		}


		/**
		 * Get the height in pixels
		 * @return 240px
		 */

		template<class TAccessMode>
		constexpr inline int16_t LGDP453xOrientation<LANDSCAPE,TAccessMode>::getHeight() const {
		  return 240;
		}


		/**
		 * Move the display output rectangle
		 * @param rc The display output rectangle
		 */

		template<class TAccessMode>
		inline void LGDP453xOrientation<LANDSCAPE,TAccessMode>::moveTo(const Rectangle& rc) const {

			this->_accessMode.writeCommand(lgdp453x::HorizontalRAMPositionStartCmd::Opcode,rc.Y);
			this->_accessMode.writeCommand(lgdp453x::HorizontalRAMPositionEndCmd::Opcode,rc.Y+rc.Height-1);

			this->_accessMode.writeCommand(lgdp453x::VerticalRAMPositionEndCmd::Opcode,319-(rc.X));
			this->_accessMode.writeCommand(lgdp453x::VerticalRAMPositionStartCmd::Opcode,319-(rc.X+rc.Width-1));

			this->_accessMode.writeCommand(lgdp453x::HorizontalAddressCmd::Opcode,rc.Y);
			this->_accessMode.writeCommand(lgdp453x::VerticalAddressCmd::Opcode,319-rc.X);
		}


		/**
		 * Set a vertical scroll position
		 * @param scrollPosition The new scroll position
		 */

		template<class TAccessMode>
		inline void LGDP453xOrientation<LANDSCAPE,TAccessMode>::setScrollPosition(int16_t scrollPosition) {

			if(scrollPosition<0)
        scrollPosition+=320;
      else if(scrollPosition>319)
        scrollPosition-=320;

      // write to the register

      this->_accessMode.writeCommand(lgdp453x::GateScanControlScrollCmd::Opcode,scrollPosition);
		}
	}
}

