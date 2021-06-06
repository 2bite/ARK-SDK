// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Window_Metal_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Window_Metal_BP.Window_Metal_BP_C.UserConstructionScript
// ()

void AWindow_Metal_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Window_Metal_BP.Window_Metal_BP_C.UserConstructionScript");

	AWindow_Metal_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Window_Metal_BP.Window_Metal_BP_C.ExecuteUbergraph_Window_Metal_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWindow_Metal_BP_C::ExecuteUbergraph_Window_Metal_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Window_Metal_BP.Window_Metal_BP_C.ExecuteUbergraph_Window_Metal_BP");

	AWindow_Metal_BP_C_ExecuteUbergraph_Window_Metal_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
