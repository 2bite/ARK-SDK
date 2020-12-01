// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_BloodExtractor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_BloodExtractor.EngramEntry_BloodExtractor_C.ExecuteUbergraph_EngramEntry_BloodExtractor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_BloodExtractor_C::ExecuteUbergraph_EngramEntry_BloodExtractor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_BloodExtractor.EngramEntry_BloodExtractor_C.ExecuteUbergraph_EngramEntry_BloodExtractor");

	UEngramEntry_BloodExtractor_C_ExecuteUbergraph_EngramEntry_BloodExtractor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
