/*
 * HwInterface.h
 *
 *  Created on: Jan 17, 2015
 *      Author: ahsueh1996
 */

#ifndef HWINTERFACE_H_
#define HWINTERFACE_H_

namespace std {
/**
 * This abstract class is responsible for all the io interfacing with hardware.
 */
class HwInterface {
public:
	HwInterface();
	/**
	 * Constructor
	 */
	virtual ~HwInterface();
	/**
	 * Deconstructor
	 */
};

} /* namespace std */

#endif /* HWINTERFACE_H_ */
