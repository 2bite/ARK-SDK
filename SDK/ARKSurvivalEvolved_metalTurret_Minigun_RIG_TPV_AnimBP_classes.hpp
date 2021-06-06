#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_metalTurret_Minigun_RIG_TPV_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass metalTurret_Minigun_RIG_TPV_AnimBP.metalTurret_Minigun_RIG_TPV_AnimBP_C
// 0x0094 (0x03D4 - 0x0340)
class UmetalTurret_Minigun_RIG_TPV_AnimBP_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_D0FC80324447B712D562BDB8A4CDECFD;      // 0x0340(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_48B2ACCC48870D0F694CDD942D9044D6;// 0x0368(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_EC2EF3DC4BFCE6E1ED4275B93A2B359F;      // 0x0398(0x0038)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x03D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass metalTurret_Minigun_RIG_TPV_AnimBP.metalTurret_Minigun_RIG_TPV_AnimBP_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_metalTurret_Minigun_RIG_TPV_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
