// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_NotePaper_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_NotePaper.EngramEntry_NotePaper_C.ExecuteUbergraph_EngramEntry_NotePaper
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_NotePaper_C::ExecuteUbergraph_EngramEntry_NotePaper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_NotePaper.EngramEntry_NotePaper_C.ExecuteUbergraph_EngramEntry_NotePaper");

	UEngramEntry_NotePaper_C_ExecuteUbergraph_EngramEntry_NotePaper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
