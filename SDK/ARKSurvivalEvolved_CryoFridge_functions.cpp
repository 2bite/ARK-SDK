// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CryoFridge_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CryoFridge.CryoFridge_C.UserConstructionScript
// ()

void ACryoFridge_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CryoFridge.CryoFridge_C.UserConstructionScript");

	ACryoFridge_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CryoFridge.CryoFridge_C.ExecuteUbergraph_CryoFridge
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACryoFridge_C::ExecuteUbergraph_CryoFridge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CryoFridge.CryoFridge_C.ExecuteUbergraph_CryoFridge");

	ACryoFridge_C_ExecuteUbergraph_CryoFridge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
