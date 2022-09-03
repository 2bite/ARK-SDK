// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjHarpoon_Tranq_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjHarpoon_Tranq.ProjHarpoon_Tranq_C.UserConstructionScript
// ()

void AProjHarpoon_Tranq_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjHarpoon_Tranq.ProjHarpoon_Tranq_C.UserConstructionScript");

	AProjHarpoon_Tranq_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjHarpoon_Tranq.ProjHarpoon_Tranq_C.ExecuteUbergraph_ProjHarpoon_Tranq
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjHarpoon_Tranq_C::ExecuteUbergraph_ProjHarpoon_Tranq(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjHarpoon_Tranq.ProjHarpoon_Tranq_C.ExecuteUbergraph_ProjHarpoon_Tranq");

	AProjHarpoon_Tranq_C_ExecuteUbergraph_ProjHarpoon_Tranq_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
