// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Scout_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Scout.DinoEntry_Scout_C.ExecuteUbergraph_DinoEntry_Scout
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Scout_C::ExecuteUbergraph_DinoEntry_Scout(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Scout.DinoEntry_Scout_C.ExecuteUbergraph_DinoEntry_Scout");

	UDinoEntry_Scout_C_ExecuteUbergraph_DinoEntry_Scout_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
