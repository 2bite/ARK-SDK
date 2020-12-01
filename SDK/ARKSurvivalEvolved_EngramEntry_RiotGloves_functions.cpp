// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_RiotGloves_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_RiotGloves.EngramEntry_RiotGloves_C.ExecuteUbergraph_EngramEntry_RiotGloves
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_RiotGloves_C::ExecuteUbergraph_EngramEntry_RiotGloves(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_RiotGloves.EngramEntry_RiotGloves_C.ExecuteUbergraph_EngramEntry_RiotGloves");

	UEngramEntry_RiotGloves_C_ExecuteUbergraph_EngramEntry_RiotGloves_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
