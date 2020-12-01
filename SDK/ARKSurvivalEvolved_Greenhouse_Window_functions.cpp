// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Greenhouse_Window_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Greenhouse_Window.Greenhouse_Window_C.UserConstructionScript
// ()

void AGreenhouse_Window_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Greenhouse_Window.Greenhouse_Window_C.UserConstructionScript");

	AGreenhouse_Window_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Greenhouse_Window.Greenhouse_Window_C.ExecuteUbergraph_Greenhouse_Window
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGreenhouse_Window_C::ExecuteUbergraph_Greenhouse_Window(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Greenhouse_Window.Greenhouse_Window_C.ExecuteUbergraph_Greenhouse_Window");

	AGreenhouse_Window_C_ExecuteUbergraph_Greenhouse_Window_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
