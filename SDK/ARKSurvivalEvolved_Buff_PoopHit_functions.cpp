// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PoopHit_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_PoopHit.Buff_PoopHit_C.UserConstructionScript
// ()

void ABuff_PoopHit_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PoopHit.Buff_PoopHit_C.UserConstructionScript");

	ABuff_PoopHit_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PoopHit.Buff_PoopHit_C.ExecuteUbergraph_Buff_PoopHit
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PoopHit_C::ExecuteUbergraph_Buff_PoopHit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PoopHit.Buff_PoopHit_C.ExecuteUbergraph_Buff_PoopHit");

	ABuff_PoopHit_C_ExecuteUbergraph_Buff_PoopHit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
