#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IceKaiju_Character_BP_Interface_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IceKaiju_Character_BP_Interface.IceKaiju_Character_BP_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UIceKaiju_Character_BP_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IceKaiju_Character_BP_Interface.IceKaiju_Character_BP_Interface_C");
		return ptr;
	}


	void SetVar_IKArenaManager(class AActor* ArenaManager);
	void CallFunc_StunKaiju();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
