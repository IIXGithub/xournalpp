/*
 * Xournal++
 *
 * Loads Cursor Themes
 *
 * @author Xournal++ Team
 * https://github.com/xournalpp/xournalpp
 *
 * @license GNU GPLv2 or later
 */

#pragma once

#include <String.h>
#include <XournalType.h>

#include <glib.h>

class CursorTheme
{
public:
	CursorTheme();
	virtual ~CursorTheme();

public:
	bool loadTheme(String name);

public:
	//	GdkCursor * getForPen(ToolSize size, int color);
	//	GdkCursor * getForEraser(ToolSize size, EraserType type);

private:
	XOJ_TYPE_ATTRIB;

	String author;
	String name;
	String description;

};
