// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Insect_Character_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Insect_Character_Base.Insect_Character_Base_C.UserConstructionScript
// ()

void AInsect_Character_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Insect_Character_Base.Insect_Character_Base_C.UserConstructionScript");

	AInsect_Character_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Insect_Character_Base.Insect_Character_Base_C.ExecuteUbergraph_Insect_Character_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AInsect_Character_Base_C::ExecuteUbergraph_Insect_Character_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Insect_Character_Base.Insect_Character_Base_C.ExecuteUbergraph_Insect_Character_Base");

	AInsect_Character_Base_C_ExecuteUbergraph_Insect_Character_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
