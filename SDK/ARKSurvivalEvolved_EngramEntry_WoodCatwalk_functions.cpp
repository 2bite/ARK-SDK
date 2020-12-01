// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_WoodCatwalk_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_WoodCatwalk.EngramEntry_WoodCatwalk_C.ExecuteUbergraph_EngramEntry_WoodCatwalk
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_WoodCatwalk_C::ExecuteUbergraph_EngramEntry_WoodCatwalk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_WoodCatwalk.EngramEntry_WoodCatwalk_C.ExecuteUbergraph_EngramEntry_WoodCatwalk");

	UEngramEntry_WoodCatwalk_C_ExecuteUbergraph_EngramEntry_WoodCatwalk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
