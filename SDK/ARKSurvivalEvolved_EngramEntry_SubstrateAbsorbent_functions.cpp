// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_SubstrateAbsorbent_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_SubstrateAbsorbent.EngramEntry_SubstrateAbsorbent_C.ExecuteUbergraph_EngramEntry_SubstrateAbsorbent
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_SubstrateAbsorbent_C::ExecuteUbergraph_EngramEntry_SubstrateAbsorbent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_SubstrateAbsorbent.EngramEntry_SubstrateAbsorbent_C.ExecuteUbergraph_EngramEntry_SubstrateAbsorbent");

	UEngramEntry_SubstrateAbsorbent_C_ExecuteUbergraph_EngramEntry_SubstrateAbsorbent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
