// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_DesertClothPants_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_DesertClothPants.EngramEntry_DesertClothPants_C.ExecuteUbergraph_EngramEntry_DesertClothPants
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_DesertClothPants_C::ExecuteUbergraph_EngramEntry_DesertClothPants(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_DesertClothPants.EngramEntry_DesertClothPants_C.ExecuteUbergraph_EngramEntry_DesertClothPants");

	UEngramEntry_DesertClothPants_C_ExecuteUbergraph_EngramEntry_DesertClothPants_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
