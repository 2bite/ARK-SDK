// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AmargaSpike_Hot_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AmargaSpike_Hot.AmargaSpike_Hot_C.UserConstructionScript
// ()

void AAmargaSpike_Hot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AmargaSpike_Hot.AmargaSpike_Hot_C.UserConstructionScript");

	AAmargaSpike_Hot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmargaSpike_Hot.AmargaSpike_Hot_C.ExecuteUbergraph_AmargaSpike_Hot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAmargaSpike_Hot_C::ExecuteUbergraph_AmargaSpike_Hot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmargaSpike_Hot.AmargaSpike_Hot_C.ExecuteUbergraph_AmargaSpike_Hot");

	AAmargaSpike_Hot_C_ExecuteUbergraph_AmargaSpike_Hot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
