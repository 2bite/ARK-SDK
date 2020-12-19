// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Yutyrannus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Yutyrannus.DinoEntry_Yutyrannus_C.ExecuteUbergraph_DinoEntry_Yutyrannus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Yutyrannus_C::ExecuteUbergraph_DinoEntry_Yutyrannus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Yutyrannus.DinoEntry_Yutyrannus_C.ExecuteUbergraph_DinoEntry_Yutyrannus");

	UDinoEntry_Yutyrannus_C_ExecuteUbergraph_DinoEntry_Yutyrannus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
