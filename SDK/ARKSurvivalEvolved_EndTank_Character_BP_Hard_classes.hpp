#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndTank_Character_BP_Hard_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EndTank_Character_BP_Hard.EndTank_Character_BP_Hard_C
// 0x0008 (0x2228 - 0x2220)
class AEndTank_Character_BP_Hard_C : public AEndTank_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_EndTank_Hard_C* DinoCharacterStatus_BP_EndTank_Hard_C1;                   // 0x2220(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EndTank_Character_BP_Hard.EndTank_Character_BP_Hard_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_EndTank_Character_BP_Hard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
