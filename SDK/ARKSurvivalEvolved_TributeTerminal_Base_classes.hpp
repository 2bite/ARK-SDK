#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TributeTerminal_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TributeTerminal_Base.TributeTerminal_Base_C
// 0x0000 (0x0E10 - 0x0E10)
class ATributeTerminal_Base_C : public AStructureItemContainerBaseBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TributeTerminal_Base.TributeTerminal_Base_C");
		return ptr;
	}


	void BPOnDemolish(class APlayerController** ForPC, class AActor** DamageCauser);
	void BPPostLoadedFromSaveGame();
	void UserConstructionScript();
	void ExecuteUbergraph_TributeTerminal_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
