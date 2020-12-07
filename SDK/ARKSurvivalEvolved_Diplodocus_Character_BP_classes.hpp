#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Diplodocus_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Diplodocus_Character_BP.Diplodocus_Character_BP_C
// 0x0008 (0x2190 - 0x2188)
class ADiplodocus_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Diplodocus_C* DinoCharacterStatus_BP_Diplodocus_C1;                     // 0x2188(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Diplodocus_Character_BP.Diplodocus_Character_BP_C");
		return ptr;
	}


	bool AllowWakingTame(class APlayerController** ForPC);
	void UserConstructionScript();
	void ExecuteUbergraph_Diplodocus_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
