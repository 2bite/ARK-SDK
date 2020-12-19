// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_DesertClothGloves_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_DesertClothGloves.EngramEntry_DesertClothGloves_C.ExecuteUbergraph_EngramEntry_DesertClothGloves
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_DesertClothGloves_C::ExecuteUbergraph_EngramEntry_DesertClothGloves(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_DesertClothGloves.EngramEntry_DesertClothGloves_C.ExecuteUbergraph_EngramEntry_DesertClothGloves");

	UEngramEntry_DesertClothGloves_C_ExecuteUbergraph_EngramEntry_DesertClothGloves_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
