// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_MekBackpack_Shield_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_MekBackpack_Shield.EngramEntry_MekBackpack_Shield_C.ExecuteUbergraph_EngramEntry_MekBackpack_Shield
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_MekBackpack_Shield_C::ExecuteUbergraph_EngramEntry_MekBackpack_Shield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_MekBackpack_Shield.EngramEntry_MekBackpack_Shield_C.ExecuteUbergraph_EngramEntry_MekBackpack_Shield");

	UEngramEntry_MekBackpack_Shield_C_ExecuteUbergraph_EngramEntry_MekBackpack_Shield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
