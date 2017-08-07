#ifndef MPC_H
#define MPC_H

#include <vector>
#include "Eigen-3.3/Eigen/Core"

using namespace std;




class MPC {
 public:

  double throttle ;
  double steering_angle ;

  double coeff_cost_ref_cte = 1;
double coeff_cost_ref_epsi = 1;
double coeff_cost_ref_v = 1;
double coeff_cost_ref_val_throttle = 1;
double coeff_cost_ref_val_steering = 1;
double coeff_cost_ref_seq_throttle = 1;
double coeff_cost_ref_seq_steering = 1;

  MPC();

  virtual ~MPC();

  // Solve the model given an initial state and polynomial coefficients.
  // Return the first actuatotions.
  void Init(vector<double> v) ;

  vector<double> Solve(Eigen::VectorXd state, Eigen::VectorXd coeffs);
};

#endif /* MPC_H */
