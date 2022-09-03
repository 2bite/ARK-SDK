#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_EcholocationDetect_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_EcholocationDetect.Buff_EcholocationDetect_C
// 0x0000 (0x09B0 - 0x09B0)
class ABuff_EcholocationDetect_C : public ABuff_XRay_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_EcholocationDetect.Buff_EcholocationDetect_C");
		return ptr;
	}


	void Set_Custom_Depth_Stencil_ValueForActor(class AActor* Actor, int Stencil_Value, bool HasCustomDepth);
	void BuffTickClient(float* DeltaTime);
	void BPDeactivated(class AActor** ForInstigator);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_EcholocationDetect(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
