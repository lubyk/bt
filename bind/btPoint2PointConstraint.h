/** Very simple binding for point 2 point constraints.
 */
class btPoint2PointConstraint : public btTypedConstraint {
public:
  btPoint2PointConstraint(btRigidBody& rbA,btRigidBody& rbB, const btVector3& pivotInA,const btVector3& pivotInB);
	btPoint2PointConstraint(btRigidBody& rbA,const btVector3& pivotInA);
};
