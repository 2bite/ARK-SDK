// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_ClothGloves_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_ClothGloves.EngramEntry_ClothGloves_C.ExecuteUbergraph_EngramEntry_ClothGloves
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_ClothGloves_C::ExecuteUbergraph_EngramEntry_ClothGloves(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_ClothGloves.EngramEntry_ClothGloves_C.ExecuteUbergraph_EngramEntry_ClothGloves");

	UEngramEntry_ClothGloves_C_ExecuteUbergraph_EngramEntry_ClothGloves_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
