// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_StoneTrapdoorGiant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_StoneTrapdoorGiant.EngramEntry_StoneTrapdoorGiant_C.ExecuteUbergraph_EngramEntry_StoneTrapdoorGiant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_StoneTrapdoorGiant_C::ExecuteUbergraph_EngramEntry_StoneTrapdoorGiant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_StoneTrapdoorGiant.EngramEntry_StoneTrapdoorGiant_C.ExecuteUbergraph_EngramEntry_StoneTrapdoorGiant");

	UEngramEntry_StoneTrapdoorGiant_C_ExecuteUbergraph_EngramEntry_StoneTrapdoorGiant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
