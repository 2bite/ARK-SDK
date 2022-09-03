#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ForestKaiju_Character_BP_Interface_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ForestKaiju_Character_BP_Interface.ForestKaiju_Character_BP_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UForestKaiju_Character_BP_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ForestKaiju_Character_BP_Interface.ForestKaiju_Character_BP_Interface_C");
		return ptr;
	}


	void SetVar_FKArenaManager(class AActor* ArenaManager);
	void CallFunc_StunKaiju();
	void GetVar_IsProtecting(bool* Value);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
