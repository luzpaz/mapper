/*
 * Copyright (c) 2005-2019 Libor Pecháček.
 *
 * This file is part of CoVe 
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef COVE_THREAD_H
#define COVE_THREAD_H

#include <QThread>

class QObject;

namespace cove {
class ProgressObserver;
class Vectorizer;

class ClassificationThread : public QThread
{
protected:
	Vectorizer& v;
	ProgressObserver* const p;

public:
	ClassificationThread() = delete;
	ClassificationThread(Vectorizer& v, ProgressObserver* p = nullptr, QObject* parent = nullptr);
	void run() override;
};
} // cove

#endif