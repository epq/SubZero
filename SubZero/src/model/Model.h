/*
 * Model.h
 *
 *  Created on: Jan 7, 2015
 *      Author: mda
 */

#ifndef MODEL_H_
#define MODEL_H_

/**
 * This is an abstract class that represents the physical attributes of the sub.
 * It accepts input from cameras and FPGA and outputs to FPGA and
 * cameras (strictly speaking). Model contains references to the tools required
 * for the assets to run. Each Model inherits from observable and has a state.
 * Each Model has a filter.
 */

class Model {
public:
	Model();
	/**
	 * Constructor for Model.
	 */
	virtual ~Model();
	/**
	 * Deconstructor. yeah.
	 */
};

#endif /* MODEL_H_ */
