#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_CruiseMissileStopMovement_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C
// 0x0000 (0x0978 - 0x0978)
class ABuff_CruiseMissileStopMovement_C : public APrimalBuff
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	bool BPPreventInstigatorMovementMode(TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode);
	void BuffTickServer(float* DeltaTime);
	void BPHandleOnStartFire(bool* bFromGamepad);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_CruiseMissileStopMovement(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
