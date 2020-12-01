// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WindowWall_Metal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WindowWall_Metal.WindowWall_Metal_C.UserConstructionScript
// ()

void AWindowWall_Metal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowWall_Metal.WindowWall_Metal_C.UserConstructionScript");

	AWindowWall_Metal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindowWall_Metal.WindowWall_Metal_C.ExecuteUbergraph_WindowWall_Metal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWindowWall_Metal_C::ExecuteUbergraph_WindowWall_Metal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowWall_Metal.WindowWall_Metal_C.ExecuteUbergraph_WindowWall_Metal");

	AWindowWall_Metal_C_ExecuteUbergraph_WindowWall_Metal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
