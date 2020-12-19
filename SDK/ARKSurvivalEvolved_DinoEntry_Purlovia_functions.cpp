// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Purlovia_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Purlovia.DinoEntry_Purlovia_C.ExecuteUbergraph_DinoEntry_Purlovia
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Purlovia_C::ExecuteUbergraph_DinoEntry_Purlovia(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Purlovia.DinoEntry_Purlovia_C.ExecuteUbergraph_DinoEntry_Purlovia");

	UDinoEntry_Purlovia_C_ExecuteUbergraph_DinoEntry_Purlovia_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
