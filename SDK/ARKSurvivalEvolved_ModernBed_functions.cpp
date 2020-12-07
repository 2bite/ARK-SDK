// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ModernBed_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ModernBed.ModernBed_C.UserConstructionScript
// ()

void AModernBed_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModernBed.ModernBed_C.UserConstructionScript");

	AModernBed_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModernBed.ModernBed_C.ExecuteUbergraph_ModernBed
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AModernBed_C::ExecuteUbergraph_ModernBed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModernBed.ModernBed_C.ExecuteUbergraph_ModernBed");

	AModernBed_C_ExecuteUbergraph_ModernBed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
