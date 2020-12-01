// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Saddle_Manta_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Saddle_Manta.EngramEntry_Saddle_Manta_C.ExecuteUbergraph_EngramEntry_Saddle_Manta
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Saddle_Manta_C::ExecuteUbergraph_EngramEntry_Saddle_Manta(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Saddle_Manta.EngramEntry_Saddle_Manta_C.ExecuteUbergraph_EngramEntry_Saddle_Manta");

	UEngramEntry_Saddle_Manta_C_ExecuteUbergraph_EngramEntry_Saddle_Manta_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
