// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Pillar_Metal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Pillar_Metal.Pillar_Metal_C.UserConstructionScript
// ()

void APillar_Metal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pillar_Metal.Pillar_Metal_C.UserConstructionScript");

	APillar_Metal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pillar_Metal.Pillar_Metal_C.ExecuteUbergraph_Pillar_Metal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APillar_Metal_C::ExecuteUbergraph_Pillar_Metal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pillar_Metal.Pillar_Metal_C.ExecuteUbergraph_Pillar_Metal");

	APillar_Metal_C_ExecuteUbergraph_Pillar_Metal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
