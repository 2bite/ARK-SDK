// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Window_Tek_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Window_Tek.Window_Tek_C.UserConstructionScript
// ()

void AWindow_Tek_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Window_Tek.Window_Tek_C.UserConstructionScript");

	AWindow_Tek_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Window_Tek.Window_Tek_C.ExecuteUbergraph_Window_Tek
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWindow_Tek_C::ExecuteUbergraph_Window_Tek(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Window_Tek.Window_Tek_C.ExecuteUbergraph_Window_Tek");

	AWindow_Tek_C_ExecuteUbergraph_Window_Tek_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
