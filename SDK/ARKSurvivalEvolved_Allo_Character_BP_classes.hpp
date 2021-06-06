#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Allo_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Allo_Character_BP.Allo_Character_BP_C
// 0x0008 (0x2300 - 0x22F8)
class AAllo_Character_BP_C : public ADino_Character_BP_Pack_C
{
public:
	class UDinoCharacterStatusComponent_BP_Allo_C*     DinoCharacterStatus_BP_Allo_C2;                           // 0x22F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Allo_Character_BP.Allo_Character_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Allo_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
