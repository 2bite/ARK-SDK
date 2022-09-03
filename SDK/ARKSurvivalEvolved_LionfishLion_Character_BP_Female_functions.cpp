// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LionfishLion_Character_BP_Female_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LionfishLion_Character_BP_Female.LionfishLion_Character_BP_Female_C.UserConstructionScript
// ()

void ALionfishLion_Character_BP_Female_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP_Female.LionfishLion_Character_BP_Female_C.UserConstructionScript");

	ALionfishLion_Character_BP_Female_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_Character_BP_Female.LionfishLion_Character_BP_Female_C.ExecuteUbergraph_LionfishLion_Character_BP_Female
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_Character_BP_Female_C::ExecuteUbergraph_LionfishLion_Character_BP_Female(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP_Female.LionfishLion_Character_BP_Female_C.ExecuteUbergraph_LionfishLion_Character_BP_Female");

	ALionfishLion_Character_BP_Female_C_ExecuteUbergraph_LionfishLion_Character_BP_Female_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
