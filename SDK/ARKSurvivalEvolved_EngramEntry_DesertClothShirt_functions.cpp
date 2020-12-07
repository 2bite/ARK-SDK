// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_DesertClothShirt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_DesertClothShirt.EngramEntry_DesertClothShirt_C.ExecuteUbergraph_EngramEntry_DesertClothShirt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_DesertClothShirt_C::ExecuteUbergraph_EngramEntry_DesertClothShirt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_DesertClothShirt.EngramEntry_DesertClothShirt_C.ExecuteUbergraph_EngramEntry_DesertClothShirt");

	UEngramEntry_DesertClothShirt_C_ExecuteUbergraph_EngramEntry_DesertClothShirt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
