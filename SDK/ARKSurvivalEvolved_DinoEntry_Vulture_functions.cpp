// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Vulture_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Vulture.DinoEntry_Vulture_C.ExecuteUbergraph_DinoEntry_Vulture
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Vulture_C::ExecuteUbergraph_DinoEntry_Vulture(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Vulture.DinoEntry_Vulture_C.ExecuteUbergraph_DinoEntry_Vulture");

	UDinoEntry_Vulture_C_ExecuteUbergraph_DinoEntry_Vulture_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
