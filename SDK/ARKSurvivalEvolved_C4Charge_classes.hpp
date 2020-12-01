#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_C4Charge_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass C4Charge.C4Charge_C
// 0x0008 (0x0B40 - 0x0B38)
class AC4Charge_C : public APrimalStructureExplosive
{
public:
	class USphereComponent*                            StasisComponent;                                          // 0x0B38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass C4Charge.C4Charge_C");
		return ptr;
	}


	bool BPPreventPlacementOnPawn(class APlayerController** PC, class APrimalCharacter** forCharacter, struct FName* ForBone);
	void UserConstructionScript();
	void ExecuteUbergraph_C4Charge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
