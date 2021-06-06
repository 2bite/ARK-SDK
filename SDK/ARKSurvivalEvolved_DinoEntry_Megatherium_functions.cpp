// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Megatherium_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Megatherium.DinoEntry_Megatherium_C.ExecuteUbergraph_DinoEntry_Megatherium
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Megatherium_C::ExecuteUbergraph_DinoEntry_Megatherium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Megatherium.DinoEntry_Megatherium_C.ExecuteUbergraph_DinoEntry_Megatherium");

	UDinoEntry_Megatherium_C_ExecuteUbergraph_DinoEntry_Megatherium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
