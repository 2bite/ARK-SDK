#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_VH_BuggyAnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass VH_BuggyAnimBP.VH_BuggyAnimBP_C
// 0x0270 (0x05B0 - 0x0340)
class UVH_BuggyAnimBP_C : public UVehicleAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_C01126D8474A5BE121BCD29AF108A0CA;      // 0x0340(0x0028)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_0FB801AA48D033754E3698A9B7E973AB;// 0x0368(0x0010)
	struct FAnimNode_WheelHandler                      AnimGraphNode_WheelHandler_515B81E349D041A9355883A4E0A1E30C;// 0x0378(0x0050)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_F2DFE2CA43DCCCFF2D41249576494667;    // 0x03C8(0x0070)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_B8B52CBA4B44B1694D9600945E681FA4;    // 0x0438(0x0070)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_2037EE7441A4FEB3A06DF0B8B9416C90;    // 0x04A8(0x0070)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_8669744A4F49587F0BCB0AB61BD6A2CE;    // 0x0518(0x0070)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_D73C294E4DB1529937A4888A6C3A016A;// 0x0588(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass VH_BuggyAnimBP.VH_BuggyAnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_VH_BuggyAnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
