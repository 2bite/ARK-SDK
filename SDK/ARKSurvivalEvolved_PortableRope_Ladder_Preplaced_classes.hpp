#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PortableRope_Ladder_Preplaced_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PortableRope_Ladder_Preplaced.PortableRope_Ladder_Preplaced_C
// 0x0001 (0x0C49 - 0x0C48)
class APortableRope_Ladder_Preplaced_C : public APortableRope_Ladder_C
{
public:
	bool                                               bDisableMultiUse;                                         // 0x0C48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PortableRope_Ladder_Preplaced.PortableRope_Ladder_Preplaced_C");
		return ptr;
	}


	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void BPPlacedStructure(class APlayerController** ForPC);
	void UserConstructionScript();
	void ExecuteUbergraph_PortableRope_Ladder_Preplaced(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
