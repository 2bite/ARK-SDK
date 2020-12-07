// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BaseFuelBurner_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BaseFuelBurner.BaseFuelBurner_C.UserConstructionScript
// ()

void ABaseFuelBurner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseFuelBurner.BaseFuelBurner_C.UserConstructionScript");

	ABaseFuelBurner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseFuelBurner.BaseFuelBurner_C.ExecuteUbergraph_BaseFuelBurner
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABaseFuelBurner_C::ExecuteUbergraph_BaseFuelBurner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseFuelBurner.BaseFuelBurner_C.ExecuteUbergraph_BaseFuelBurner");

	ABaseFuelBurner_C_ExecuteUbergraph_BaseFuelBurner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
