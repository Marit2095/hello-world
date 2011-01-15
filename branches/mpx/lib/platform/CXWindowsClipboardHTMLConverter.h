/*
 * synergy -- mouse and keyboard sharing utility
 * Copyright (C) 2004 Chris Schoeneman, Nick Bolton, Sorin Sbarnea
 * 
 * This package is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * found in the file COPYING that should have accompanied this file.
 * 
 * This package is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef CXWINDOWSCLIPBOARDHTMLCONVERTER_H
#define CXWINDOWSCLIPBOARDHTMLCONVERTER_H

#include "CXWindowsClipboard.h"

//! Convert to/from HTML encoding
class CXWindowsClipboardHTMLConverter : public IXWindowsClipboardConverter {
public:
	/*!
	\c name is converted to an atom and that is reported by getAtom().
	*/
	CXWindowsClipboardHTMLConverter(Display* display, const char* name);
	virtual ~CXWindowsClipboardHTMLConverter();

	// IXWindowsClipboardConverter overrides
	virtual IClipboard::EFormat
						getFormat() const;
	virtual Atom		getAtom() const;
	virtual int			getDataSize() const;
	virtual CString		fromIClipboard(const CString&) const;
	virtual CString		toIClipboard(const CString&) const;

private:
	Atom				m_atom;
};

#endif
