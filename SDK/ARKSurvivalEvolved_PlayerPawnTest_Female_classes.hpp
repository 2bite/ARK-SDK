#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PlayerPawnTest_Female_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerPawnTest_Female.PlayerPawnTest_Female_C
// 0x0008 (0x2098 - 0x2090)
class APlayerPawnTest_Female_C : public APlayerPawnTest_Child_C
{
public:
	class UPlayerCharacterStatusComponent_BP_C*        PlayerCharacterStatus;                                    // 0x2090(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawnTest_Female.PlayerPawnTest_Female_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_PlayerPawnTest_Female(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
