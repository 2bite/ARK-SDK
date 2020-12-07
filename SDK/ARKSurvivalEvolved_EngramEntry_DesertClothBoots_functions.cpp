// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_DesertClothBoots_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_DesertClothBoots.EngramEntry_DesertClothBoots_C.ExecuteUbergraph_EngramEntry_DesertClothBoots
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_DesertClothBoots_C::ExecuteUbergraph_EngramEntry_DesertClothBoots(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_DesertClothBoots.EngramEntry_DesertClothBoots_C.ExecuteUbergraph_EngramEntry_DesertClothBoots");

	UEngramEntry_DesertClothBoots_C_ExecuteUbergraph_EngramEntry_DesertClothBoots_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
