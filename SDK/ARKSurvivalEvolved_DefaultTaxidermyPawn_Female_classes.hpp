#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DefaultTaxidermyPawn_Female_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DefaultTaxidermyPawn_Female.DefaultTaxidermyPawn_Female_C
// 0x0000 (0x2100 - 0x2100)
class ADefaultTaxidermyPawn_Female_C : public APlayerPawnTest_Female_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DefaultTaxidermyPawn_Female.DefaultTaxidermyPawn_Female_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_DefaultTaxidermyPawn_Female(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
